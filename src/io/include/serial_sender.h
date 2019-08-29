#ifndef SERIAL_SENDER_H
#define SERIAL_SENDER_H


#include <string>
#include <iostream>

#include <boost/asio.hpp>


namespace furgbol {
namespace io {

class SerialSender {
    private:
        boost::asio::streambuf buf_;
        boost::asio::io_service io_service_;
        boost::asio::streambuf::const_buffers_type buffer_;
        boost::asio::serial_port serial_port_;

        std::vector<unsigned char> buffer_to_send_;

    public:
        SerialSender(std::string serial_port_name);
        ~SerialSender();

        //void send(SerialMessage message_to_send);
};

} // namespace io
} // namespace furgbol


#endif
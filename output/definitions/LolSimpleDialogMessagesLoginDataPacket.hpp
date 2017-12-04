#ifndef SWAGGER_TYPES_LolSimpleDialogMessagesLoginDataPacket_HPP
#define SWAGGER_TYPES_LolSimpleDialogMessagesLoginDataPacket_HPP
#include <json.hpp>
#include "LolSimpleDialogMessagesSimpleMessage.hpp"
namespace test {
  // 
  struct LolSimpleDialogMessagesLoginDataPacket {
'    // 
    std::vector<LolSimpleDialogMessagesSimpleMessage> simpleMessages;
  };

  void to_json(nlohmann::json& j, const LolSimpleDialogMessagesLoginDataPacket& v) {
    j["simpleMessages"] = v.simpleMessages;
  }

  void from_json(const nlohmann::json& j, LolSimpleDialogMessagesLoginDataPacket& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolSimpleDialogMessagesSimpleMessage>>;
  }

}
#endif // SWAGGER_TYPES_LolSimpleDialogMessagesLoginDataPacket_HPP

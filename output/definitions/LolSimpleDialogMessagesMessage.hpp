#ifndef SWAGGER_TYPES_LolSimpleDialogMessagesMessage_HPP
#define SWAGGER_TYPES_LolSimpleDialogMessagesMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSimpleDialogMessagesMessage {
    // 
    nlohmann::json body;
    // 
    int64_t id;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolSimpleDialogMessagesMessage& v) {
    j["body"] = v.body;
    j["id"] = v.id;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolSimpleDialogMessagesMessage& v) {
    v.body = j.at("body").get<nlohmann::json>;
    v.id = j.at("id").get<int64_t>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolSimpleDialogMessagesMessage_HPP

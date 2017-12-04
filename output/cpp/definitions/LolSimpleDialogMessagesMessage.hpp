#ifndef SWAGGER_TYPES_LolSimpleDialogMessagesMessage_HPP
#define SWAGGER_TYPES_LolSimpleDialogMessagesMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSimpleDialogMessagesMessage {
    // 
    nlohmann::json body;
    // 
    std::string type;
    // 
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesMessage& v) {
    j["body"] = v.body;
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesMessage& v) {
    v.body = j.at("body").get<nlohmann::json>;
    v.type = j.at("type").get<std::string>;
    v.id = j.at("id").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSimpleDialogMessagesMessage_HPP

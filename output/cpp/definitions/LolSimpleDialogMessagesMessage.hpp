#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSimpleDialogMessagesMessage_t {
    int64_t id;
    nlohmann::json body;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesMessage_t& v) {
    j["id"] = v.id;
    j["body"] = v.body;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesMessage_t& v) {
    v.id = j.at("id").get<int64_t>();
    v.body = j.at("body").get<nlohmann::json>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolSimpleDialogMessagesMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

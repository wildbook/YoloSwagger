#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSimpleDialogMessagesMessage_t {
    nlohmann::json_t body;
    std::string_t type;
    int64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesMessage_t& v) {
    j["body"] = v.body;
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesMessage_t& v) {
    v.body = j.at("body").get<nlohmann::json_t>();
    v.type = j.at("type").get<std::string_t>();
    v.id = j.at("id").get<int64_t_t>();
  }
  inline std::string to_string(const LolSimpleDialogMessagesMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

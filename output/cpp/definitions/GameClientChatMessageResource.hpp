#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameClientChatMessageResource_t {
    std::string_t body;
    std::string_t fromSummonerName;
  };

  inline void to_json(nlohmann::json& j, const GameClientChatMessageResource_t& v) {
    j["body"] = v.body;
    j["fromSummonerName"] = v.fromSummonerName;
  }

  inline void from_json(const nlohmann::json& j, GameClientChatMessageResource_t& v) {
    v.body = j.at("body").get<std::string_t>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string_t>();
  }
  inline std::string to_string(const GameClientChatMessageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

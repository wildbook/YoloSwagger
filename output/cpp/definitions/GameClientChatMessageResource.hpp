#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameClientChatMessageResource_t {
    std::string body;
    std::string fromSummonerName;
  };

  inline void to_json(nlohmann::json& j, const GameClientChatMessageResource_t& v) {
    j["body"] = v.body;
    j["fromSummonerName"] = v.fromSummonerName;
  }

  inline void from_json(const nlohmann::json& j, GameClientChatMessageResource_t& v) {
    v.body = j.at("body").get<std::string>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
  }
}

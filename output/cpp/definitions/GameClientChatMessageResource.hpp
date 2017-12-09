#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameClientChatMessageResource_t {
    std::string fromSummonerName;
    std::string body;
  };

  inline void to_json(nlohmann::json& j, const GameClientChatMessageResource_t& v) {
    j["fromSummonerName"] = v.fromSummonerName;
    j["body"] = v.body;
  }

  inline void from_json(const nlohmann::json& j, GameClientChatMessageResource_t& v) {
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.body = j.at("body").get<std::string>();
  }
  inline std::string to_string(const GameClientChatMessageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

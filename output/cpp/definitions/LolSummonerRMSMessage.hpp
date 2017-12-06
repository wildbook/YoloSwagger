#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerRMSMessage_t {
    std::string payload;
    int64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSMessage_t& v) {
    j["payload"] = v.payload;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSMessage_t& v) {
    v.payload = j.at("payload").get<std::string>();
    v.timestamp = j.at("timestamp").get<int64_t>();
  }
}

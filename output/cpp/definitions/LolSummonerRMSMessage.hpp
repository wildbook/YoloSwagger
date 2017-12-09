#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerRMSMessage_t {
    int64_t timestamp;
    std::string payload;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSMessage_t& v) {
    j["timestamp"] = v.timestamp;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSMessage_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.payload = j.at("payload").get<std::string>();
  }
  inline std::string to_string(const LolSummonerRMSMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

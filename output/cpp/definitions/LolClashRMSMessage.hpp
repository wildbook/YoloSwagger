#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRMSMessage_t {
    std::string payload;
    int64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolClashRMSMessage_t& v) {
    j["payload"] = v.payload;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolClashRMSMessage_t& v) {
    v.payload = j.at("payload").get<std::string>();
    v.timestamp = j.at("timestamp").get<int64_t>();
  }
  inline std::string to_string(const LolClashRMSMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

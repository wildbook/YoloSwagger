#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LoginDataPacket_t {
    uint64_t timeUntilFirstWinOfDay;
  };

  inline void to_json(nlohmann::json& j, const LoginDataPacket_t& v) {
    j["timeUntilFirstWinOfDay"] = v.timeUntilFirstWinOfDay;
  }

  inline void from_json(const nlohmann::json& j, LoginDataPacket_t& v) {
    v.timeUntilFirstWinOfDay = j.at("timeUntilFirstWinOfDay").get<uint64_t>();
  }
  inline std::string to_string(const LoginDataPacket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameStats_t {
    uint64_t timeUntilNextFirstWinBonus;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameStats_t& v) {
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameStats_t& v) {
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<uint64_t>();
  }
  inline std::string to_string(const EndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

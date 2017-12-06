#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlaytimeReminder_t {
    uint32_t hours;
  };

  inline void to_json(nlohmann::json& j, const PlaytimeReminder_t& v) {
    j["hours"] = v.hours;
  }

  inline void from_json(const nlohmann::json& j, PlaytimeReminder_t& v) {
    v.hours = j.at("hours").get<uint32_t>();
  }
}

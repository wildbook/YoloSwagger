#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubReferenceDto_t {
    std::string clubKey;
    std::string clubName;
  };

  inline void to_json(nlohmann::json& j, const ClubReferenceDto_t& v) {
    j["clubKey"] = v.clubKey;
    j["clubName"] = v.clubName;
  }

  inline void from_json(const nlohmann::json& j, ClubReferenceDto_t& v) {
    v.clubKey = j.at("clubKey").get<std::string>();
    v.clubName = j.at("clubName").get<std::string>();
  }
}

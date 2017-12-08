#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubReferenceDto_t {
    std::string clubName;
    std::string clubKey;
  };

  inline void to_json(nlohmann::json& j, const ClubReferenceDto_t& v) {
    j["clubName"] = v.clubName;
    j["clubKey"] = v.clubKey;
  }

  inline void from_json(const nlohmann::json& j, ClubReferenceDto_t& v) {
    v.clubName = j.at("clubName").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
  }
  inline std::string to_string(const ClubReferenceDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

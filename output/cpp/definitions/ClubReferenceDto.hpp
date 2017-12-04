#ifndef SWAGGER_TYPES_ClubReferenceDto_HPP
#define SWAGGER_TYPES_ClubReferenceDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubReferenceDto {
    // 
    std::string clubName;
    // 
    std::string clubKey;
  };

  inline void to_json(nlohmann::json& j, const ClubReferenceDto& v) {
    j["clubName"] = v.clubName;
    j["clubKey"] = v.clubKey;
  }

  inline void from_json(const nlohmann::json& j, ClubReferenceDto& v) {
    v.clubName = j.at("clubName").get<std::string>;
    v.clubKey = j.at("clubKey").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubReferenceDto_HPP

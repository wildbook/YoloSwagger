#ifndef SWAGGER_TYPES_ClubReferenceDto_HPP
#define SWAGGER_TYPES_ClubReferenceDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubReferenceDto {
    // 
    std::string clubKey;
    // 
    std::string clubName;
  };

  inline void to_json(nlohmann::json& j, const ClubReferenceDto& v) {
    j["clubKey"] = v.clubKey;
    j["clubName"] = v.clubName;
  }

  inline void from_json(const nlohmann::json& j, ClubReferenceDto& v) {
    v.clubKey = j.at("clubKey").get<std::string>;
    v.clubName = j.at("clubName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubReferenceDto_HPP

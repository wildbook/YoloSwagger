#ifndef SWAGGER_TYPES_ClubDto_HPP
#define SWAGGER_TYPES_ClubDto_HPP
#include <json.hpp>
#include "ClubDataDto.hpp"
#include "ClubMembershipDto.hpp"
namespace leagueapi {
  // 
  struct ClubDto {
    // 
    std::string platformId;
    // 
    std::string resourceUri;
    // 
    ClubMembershipDto membership;
    // 
    ClubDataDto clubData;
  };

  inline void to_json(nlohmann::json& j, const ClubDto& v) {
    j["platformId"] = v.platformId;
    j["resourceUri"] = v.resourceUri;
    j["membership"] = v.membership;
    j["clubData"] = v.clubData;
  }

  inline void from_json(const nlohmann::json& j, ClubDto& v) {
    v.platformId = j.at("platformId").get<std::string>;
    v.resourceUri = j.at("resourceUri").get<std::string>;
    v.membership = j.at("membership").get<ClubMembershipDto>;
    v.clubData = j.at("clubData").get<ClubDataDto>;
  }

}
#endif // SWAGGER_TYPES_ClubDto_HPP

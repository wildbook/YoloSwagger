#ifndef SWAGGER_TYPES_ClubDto_HPP
#define SWAGGER_TYPES_ClubDto_HPP
#include <json.hpp>
#include "ClubDataDto.hpp"
#include "ClubMembershipDto.hpp"
namespace leagueapi {
  // 
  struct ClubDto {
    // 
    ClubDataDto clubData;
    // 
    ClubMembershipDto membership;
    // 
    std::string platformId;
    // 
    std::string resourceUri;
  };

  inline void to_json(nlohmann::json& j, const ClubDto& v) {
    j["clubData"] = v.clubData;
    j["membership"] = v.membership;
    j["platformId"] = v.platformId;
    j["resourceUri"] = v.resourceUri;
  }

  inline void from_json(const nlohmann::json& j, ClubDto& v) {
    v.clubData = j.at("clubData").get<ClubDataDto>;
    v.membership = j.at("membership").get<ClubMembershipDto>;
    v.platformId = j.at("platformId").get<std::string>;
    v.resourceUri = j.at("resourceUri").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubDto_HPP

#pragma once
#include <json.hpp>
#include <optional>
#include "ClubDataDto.hpp"
#include "ClubMembershipDto.hpp"
namespace leagueapi {
  struct ClubDto_t {
    ClubMembershipDto_t membership;
    std::string platformId;
    ClubDataDto_t clubData;
    std::string resourceUri;
  };

  inline void to_json(nlohmann::json& j, const ClubDto_t& v) {
    j["membership"] = v.membership;
    j["platformId"] = v.platformId;
    j["clubData"] = v.clubData;
    j["resourceUri"] = v.resourceUri;
  }

  inline void from_json(const nlohmann::json& j, ClubDto_t& v) {
    v.membership = j.at("membership").get<ClubMembershipDto_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.clubData = j.at("clubData").get<ClubDataDto_t>();
    v.resourceUri = j.at("resourceUri").get<std::string>();
  }
  inline std::string to_string(const ClubDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

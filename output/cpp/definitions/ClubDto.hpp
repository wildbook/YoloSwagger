#pragma once
#include <json.hpp>
#include <optional>
#include "ClubMembershipDto.hpp"
#include "ClubDataDto.hpp"
namespace leagueapi {
  struct ClubDto_t {
    ClubDataDto_t clubData;
    std::string platformId;
    std::string resourceUri;
    ClubMembershipDto_t membership;
  };

  inline void to_json(nlohmann::json& j, const ClubDto_t& v) {
    j["clubData"] = v.clubData;
    j["platformId"] = v.platformId;
    j["resourceUri"] = v.resourceUri;
    j["membership"] = v.membership;
  }

  inline void from_json(const nlohmann::json& j, ClubDto_t& v) {
    v.clubData = j.at("clubData").get<ClubDataDto_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.resourceUri = j.at("resourceUri").get<std::string>();
    v.membership = j.at("membership").get<ClubMembershipDto_t>();
  }
  inline std::string to_string(const ClubDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

#ifndef SWAGGER_TYPES_LolClubsPublicPlayerClubMembership_HPP
#define SWAGGER_TYPES_LolClubsPublicPlayerClubMembership_HPP
#include <json.hpp>
#include "LolClubsPublicClubPlayer.hpp"
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicPlayerClub.hpp"
namespace leagueapi {
  // 
  struct LolClubsPublicPlayerClubMembership {
    // 
    LolClubsPublicClubPlayer info;
    // 
    std::string secureClubPresenceInfoString;
    // 
    LolClubsPublicClubPreferences preferences;
    // 
    std::vector<LolClubsPublicPlayerClub> activeClubs;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClubMembership& v) {
    j["info"] = v.info;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["preferences"] = v.preferences;
    j["activeClubs"] = v.activeClubs;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClubMembership& v) {
    v.info = j.at("info").get<LolClubsPublicClubPlayer>;
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>;
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences>;
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub>>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicPlayerClubMembership_HPP

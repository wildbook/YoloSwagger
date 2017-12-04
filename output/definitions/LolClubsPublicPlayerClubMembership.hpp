#ifndef SWAGGER_TYPES_LolClubsPublicPlayerClubMembership_HPP
#define SWAGGER_TYPES_LolClubsPublicPlayerClubMembership_HPP
#include <json.hpp>
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicPlayerClub.hpp"
#include "LolClubsPublicClubPlayer.hpp"
namespace test {
  // 
  struct LolClubsPublicPlayerClubMembership {
'    // 
    std::vector<LolClubsPublicPlayerClub> activeClubs;
    // 
    LolClubsPublicClubPlayer info;
    // 
    LolClubsPublicClubPreferences preferences;
    // 
    std::string secureClubPresenceInfoString;
  };

  void to_json(nlohmann::json& j, const LolClubsPublicPlayerClubMembership& v) {
    j["activeClubs"] = v.activeClubs;
    j["info"] = v.info;
    j["preferences"] = v.preferences;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
  }

  void from_json(const nlohmann::json& j, LolClubsPublicPlayerClubMembership& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub>>;
    v.info = j.at("info").get<LolClubsPublicClubPlayer>;
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences>;
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicPlayerClubMembership_HPP

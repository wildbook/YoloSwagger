#ifndef SWAGGER_TYPES_ClubPreferences_HPP
#define SWAGGER_TYPES_ClubPreferences_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubPreferences {
    // 
    std::string primaryClubKey;
    // 
    bool shareClubAffiliation;
  };

  void to_json(nlohmann::json& j, const ClubPreferences& v) {
    j["primaryClubKey"] = v.primaryClubKey;
    j["shareClubAffiliation"] = v.shareClubAffiliation;
  }

  void from_json(const nlohmann::json& j, ClubPreferences& v) {
    v.primaryClubKey = j.at("primaryClubKey").get<std::string>;
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>;
  }

}
#endif // SWAGGER_TYPES_ClubPreferences_HPP

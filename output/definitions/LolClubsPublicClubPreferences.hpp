#ifndef SWAGGER_TYPES_LolClubsPublicClubPreferences_HPP
#define SWAGGER_TYPES_LolClubsPublicClubPreferences_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClubsPublicClubPreferences {
    // 
    bool shareClubAffiliation;
  };

  void to_json(nlohmann::json& j, const LolClubsPublicClubPreferences& v) {
    j["shareClubAffiliation"] = v.shareClubAffiliation;
  }

  void from_json(const nlohmann::json& j, LolClubsPublicClubPreferences& v) {
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicClubPreferences_HPP

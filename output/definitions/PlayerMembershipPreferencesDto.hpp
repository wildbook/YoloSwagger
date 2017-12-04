#ifndef SWAGGER_TYPES_PlayerMembershipPreferencesDto_HPP
#define SWAGGER_TYPES_PlayerMembershipPreferencesDto_HPP
#include <json.hpp>
namespace test {
  // 
  struct PlayerMembershipPreferencesDto {
'    // 
    std::string primaryActiveClubKey;
    // 
    bool shareClubAffiliation;
  };

  void to_json(nlohmann::json& j, const PlayerMembershipPreferencesDto& v) {
    j["primaryActiveClubKey"] = v.primaryActiveClubKey;
    j["shareClubAffiliation"] = v.shareClubAffiliation;
  }

  void from_json(const nlohmann::json& j, PlayerMembershipPreferencesDto& v) {
    v.primaryActiveClubKey = j.at("primaryActiveClubKey").get<std::string>;
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PlayerMembershipPreferencesDto_HPP

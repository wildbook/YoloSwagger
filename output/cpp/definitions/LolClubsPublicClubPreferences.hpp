#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClubsPublicClubPreferences_t {
    bool shareClubAffiliation;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubPreferences_t& v) {
    j["shareClubAffiliation"] = v.shareClubAffiliation;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubPreferences_t& v) {
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>();
  }
}

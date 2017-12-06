#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PersonalizedOffersLcdsChampionSkinDTO_t {
    int32_t championId;
    int32_t skinId;
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    j["championId"] = v.championId;
    j["skinId"] = v.skinId;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.owned = j.at("owned").get<bool>();
  }
}

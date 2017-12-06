#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PersonalizedOffersLcdsChampionSkinDTO_t {
    int32_t championId;
    bool owned;
    int32_t skinId;
  };

  inline void to_json(nlohmann::json& j, const PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    j["championId"] = v.championId;
    j["owned"] = v.owned;
    j["skinId"] = v.skinId;
  }

  inline void from_json(const nlohmann::json& j, PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.owned = j.at("owned").get<bool>();
    v.skinId = j.at("skinId").get<int32_t>();
  }
}

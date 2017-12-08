#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PersonalizedOffersLcdsChampionSkinDTO_t {
    int32_t skinId;
    int32_t championId;
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    j["skinId"] = v.skinId;
    j["championId"] = v.championId;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    v.skinId = j.at("skinId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.owned = j.at("owned").get<bool>();
  }
  inline std::string to_string(const PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

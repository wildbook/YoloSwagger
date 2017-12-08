#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PersonalizedOffersLcdsChampionSkinDTO_t {
    int32_t skinId;
    bool owned;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    j["skinId"] = v.skinId;
    j["owned"] = v.owned;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    v.skinId = j.at("skinId").get<int32_t>();
    v.owned = j.at("owned").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const PersonalizedOffersLcdsChampionSkinDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

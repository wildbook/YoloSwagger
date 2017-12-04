#ifndef SWAGGER_TYPES_PersonalizedOffersLcdsChampionSkinDTO_HPP
#define SWAGGER_TYPES_PersonalizedOffersLcdsChampionSkinDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PersonalizedOffersLcdsChampionSkinDTO {
    // 
    int32_t skinId;
    // 
    int32_t championId;
    // 
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const PersonalizedOffersLcdsChampionSkinDTO& v) {
    j["skinId"] = v.skinId;
    j["championId"] = v.championId;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, PersonalizedOffersLcdsChampionSkinDTO& v) {
    v.skinId = j.at("skinId").get<int32_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.owned = j.at("owned").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PersonalizedOffersLcdsChampionSkinDTO_HPP

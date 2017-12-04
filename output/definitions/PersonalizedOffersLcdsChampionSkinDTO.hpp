#ifndef SWAGGER_TYPES_PersonalizedOffersLcdsChampionSkinDTO_HPP
#define SWAGGER_TYPES_PersonalizedOffersLcdsChampionSkinDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct PersonalizedOffersLcdsChampionSkinDTO {
'    // 
    int32_t championId;
    // 
    bool owned;
    // 
    int32_t skinId;
  };

  void to_json(nlohmann::json& j, const PersonalizedOffersLcdsChampionSkinDTO& v) {
    j["championId"] = v.championId;
    j["owned"] = v.owned;
    j["skinId"] = v.skinId;
  }

  void from_json(const nlohmann::json& j, PersonalizedOffersLcdsChampionSkinDTO& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.owned = j.at("owned").get<bool>;
    v.skinId = j.at("skinId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_PersonalizedOffersLcdsChampionSkinDTO_HPP

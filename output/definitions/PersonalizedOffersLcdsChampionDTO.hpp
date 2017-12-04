#ifndef SWAGGER_TYPES_PersonalizedOffersLcdsChampionDTO_HPP
#define SWAGGER_TYPES_PersonalizedOffersLcdsChampionDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct PersonalizedOffersLcdsChampionDTO {
'    // 
    int32_t championId;
    // 
    bool owned;
  };

  void to_json(nlohmann::json& j, const PersonalizedOffersLcdsChampionDTO& v) {
    j["championId"] = v.championId;
    j["owned"] = v.owned;
  }

  void from_json(const nlohmann::json& j, PersonalizedOffersLcdsChampionDTO& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.owned = j.at("owned").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PersonalizedOffersLcdsChampionDTO_HPP

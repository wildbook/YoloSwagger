#ifndef SWAGGER_TYPES_CollectionsLcdsChampionSkinDTO_HPP
#define SWAGGER_TYPES_CollectionsLcdsChampionSkinDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct CollectionsLcdsChampionSkinDTO {
    // 
    uint64_t endDate;
    // 
    int32_t winCountRemaining;
    // 
    uint64_t purchaseDate;
    // 
    int32_t skinId;
    // 
    bool owned;
    // 
    bool lastSelected;
    // 
    std::vector<std::string> sources;
    // 
    bool freeToPlayReward;
    // 
    bool stillObtainable;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsChampionSkinDTO& v) {
    j["endDate"] = v.endDate;
    j["winCountRemaining"] = v.winCountRemaining;
    j["purchaseDate"] = v.purchaseDate;
    j["skinId"] = v.skinId;
    j["owned"] = v.owned;
    j["lastSelected"] = v.lastSelected;
    j["sources"] = v.sources;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["stillObtainable"] = v.stillObtainable;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsChampionSkinDTO& v) {
    v.endDate = j.at("endDate").get<uint64_t>;
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>;
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>;
    v.skinId = j.at("skinId").get<int32_t>;
    v.owned = j.at("owned").get<bool>;
    v.lastSelected = j.at("lastSelected").get<bool>;
    v.sources = j.at("sources").get<std::vector<std::string>>;
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.stillObtainable = j.at("stillObtainable").get<bool>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsChampionSkinDTO_HPP

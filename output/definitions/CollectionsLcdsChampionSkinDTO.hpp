#ifndef SWAGGER_TYPES_CollectionsLcdsChampionSkinDTO_HPP
#define SWAGGER_TYPES_CollectionsLcdsChampionSkinDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct CollectionsLcdsChampionSkinDTO {
    // 
    int32_t championId;
    // 
    uint64_t endDate;
    // 
    bool freeToPlayReward;
    // 
    bool lastSelected;
    // 
    bool owned;
    // 
    uint64_t purchaseDate;
    // 
    int32_t skinId;
    // 
    std::vector<std::string> sources;
    // 
    bool stillObtainable;
    // 
    int32_t winCountRemaining;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsChampionSkinDTO& v) {
    j["championId"] = v.championId;
    j["endDate"] = v.endDate;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["lastSelected"] = v.lastSelected;
    j["owned"] = v.owned;
    j["purchaseDate"] = v.purchaseDate;
    j["skinId"] = v.skinId;
    j["sources"] = v.sources;
    j["stillObtainable"] = v.stillObtainable;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsChampionSkinDTO& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.endDate = j.at("endDate").get<uint64_t>;
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.lastSelected = j.at("lastSelected").get<bool>;
    v.owned = j.at("owned").get<bool>;
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>;
    v.skinId = j.at("skinId").get<int32_t>;
    v.sources = j.at("sources").get<std::vector<std::string>>;
    v.stillObtainable = j.at("stillObtainable").get<bool>;
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsChampionSkinDTO_HPP

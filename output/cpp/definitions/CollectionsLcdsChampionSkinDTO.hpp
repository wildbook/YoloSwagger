#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsChampionSkinDTO_t {
    int32_t championId;
    bool stillObtainable;
    uint64_t endDate;
    bool freeToPlayReward;
    int32_t skinId;
    int32_t winCountRemaining;
    std::vector<std::string> sources;
    uint64_t purchaseDate;
    bool lastSelected;
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsChampionSkinDTO_t& v) {
    j["championId"] = v.championId;
    j["stillObtainable"] = v.stillObtainable;
    j["endDate"] = v.endDate;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["skinId"] = v.skinId;
    j["winCountRemaining"] = v.winCountRemaining;
    j["sources"] = v.sources;
    j["purchaseDate"] = v.purchaseDate;
    j["lastSelected"] = v.lastSelected;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsChampionSkinDTO_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.owned = j.at("owned").get<bool>();
  }
}

#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsChampionSkinDTO_t {
    uint64_t purchaseDate;
    uint64_t endDate;
    int32_t skinId;
    int32_t championId;
    std::vector<std::string> sources;
    bool lastSelected;
    bool owned;
    bool freeToPlayReward;
    bool stillObtainable;
    int32_t winCountRemaining;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsChampionSkinDTO_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["endDate"] = v.endDate;
    j["skinId"] = v.skinId;
    j["championId"] = v.championId;
    j["sources"] = v.sources;
    j["lastSelected"] = v.lastSelected;
    j["owned"] = v.owned;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["stillObtainable"] = v.stillObtainable;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsChampionSkinDTO_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
  }
  inline std::string to_string(const CollectionsLcdsChampionSkinDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

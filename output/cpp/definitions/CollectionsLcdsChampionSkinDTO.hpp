#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsChampionSkinDTO_t {
    uint64_t purchaseDate;
    bool stillObtainable;
    std::vector<std::string> sources;
    int32_t championId;
    uint64_t endDate;
    bool lastSelected;
    int32_t skinId;
    bool owned;
    bool freeToPlayReward;
    int32_t winCountRemaining;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsChampionSkinDTO_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["stillObtainable"] = v.stillObtainable;
    j["sources"] = v.sources;
    j["championId"] = v.championId;
    j["endDate"] = v.endDate;
    j["lastSelected"] = v.lastSelected;
    j["skinId"] = v.skinId;
    j["owned"] = v.owned;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsChampionSkinDTO_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.championId = j.at("championId").get<int32_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.owned = j.at("owned").get<bool>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
  }
  inline std::string to_string(const CollectionsLcdsChampionSkinDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

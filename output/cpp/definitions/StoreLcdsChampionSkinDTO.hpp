#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsChampionSkinDTO_t {
    bool owned;
    bool stillObtainable;
    bool lastSelected;
    uint64_t endDate;
    uint64_t purchaseDate;
    bool freeToPlayReward;
    int32_t winCountRemaining;
    int32_t skinId;
    std::vector<std::string> sources;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsChampionSkinDTO_t& v) {
    j["owned"] = v.owned;
    j["stillObtainable"] = v.stillObtainable;
    j["lastSelected"] = v.lastSelected;
    j["endDate"] = v.endDate;
    j["purchaseDate"] = v.purchaseDate;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["winCountRemaining"] = v.winCountRemaining;
    j["skinId"] = v.skinId;
    j["sources"] = v.sources;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsChampionSkinDTO_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const StoreLcdsChampionSkinDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

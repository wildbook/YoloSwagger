#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsChampionSkinDTO_t {
    bool lastSelected;
    bool stillObtainable;
    int32_t skinId;
    bool freeToPlayReward;
    bool owned;
    uint64_t purchaseDate;
    uint64_t endDate;
    std::vector<std::string> sources;
    int32_t winCountRemaining;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsChampionSkinDTO_t& v) {
    j["lastSelected"] = v.lastSelected;
    j["stillObtainable"] = v.stillObtainable;
    j["skinId"] = v.skinId;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["purchaseDate"] = v.purchaseDate;
    j["endDate"] = v.endDate;
    j["sources"] = v.sources;
    j["winCountRemaining"] = v.winCountRemaining;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsChampionSkinDTO_t& v) {
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const StoreLcdsChampionSkinDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

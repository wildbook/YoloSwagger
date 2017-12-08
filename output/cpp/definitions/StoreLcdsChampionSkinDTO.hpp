#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsChampionSkinDTO_t {
    uint64_t_t endDate;
    int32_t_t winCountRemaining;
    uint64_t_t purchaseDate;
    int32_t_t skinId;
    bool_t owned;
    bool_t lastSelected;
    std::vector<std::string> sources;
    bool_t freeToPlayReward;
    bool_t stillObtainable;
    int32_t_t championId;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsChampionSkinDTO_t& v) {
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

  inline void from_json(const nlohmann::json& j, StoreLcdsChampionSkinDTO_t& v) {
    v.endDate = j.at("endDate").get<uint64_t_t>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t_t>();
    v.skinId = j.at("skinId").get<int32_t_t>();
    v.owned = j.at("owned").get<bool_t>();
    v.lastSelected = j.at("lastSelected").get<bool_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool_t>();
    v.championId = j.at("championId").get<int32_t_t>();
  }
  inline std::string to_string(const StoreLcdsChampionSkinDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

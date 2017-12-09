#pragma once
#include <json.hpp>
#include <optional>
#include "StoreLcdsChampionSkinDTO.hpp"
namespace leagueapi {
  struct StoreLcdsChampionDTO_t {
    std::vector<StoreLcdsChampionSkinDTO_t> championSkins;
    bool active;
    int32_t championId;
    uint64_t endDate;
    bool owned;
    bool rankedPlayEnabled;
    uint32_t winCountRemaining;
    uint64_t purchaseDate;
    std::vector<std::string> sources;
    bool botEnabled;
    bool freeToPlayReward;
    bool freeToPlay;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsChampionDTO_t& v) {
    j["championSkins"] = v.championSkins;
    j["active"] = v.active;
    j["championId"] = v.championId;
    j["endDate"] = v.endDate;
    j["owned"] = v.owned;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["winCountRemaining"] = v.winCountRemaining;
    j["purchaseDate"] = v.purchaseDate;
    j["sources"] = v.sources;
    j["botEnabled"] = v.botEnabled;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["freeToPlay"] = v.freeToPlay;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsChampionDTO_t& v) {
    v.championSkins = j.at("championSkins").get<std::vector<StoreLcdsChampionSkinDTO_t>>();
    v.active = j.at("active").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.owned = j.at("owned").get<bool>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<uint32_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
  }
  inline std::string to_string(const StoreLcdsChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

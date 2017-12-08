#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsChampionSkinDTO.hpp"
namespace leagueapi {
  struct CollectionsLcdsChampionDTO_t {
    uint64_t purchaseDate;
    bool freeToPlay;
    uint64_t purchased;
    bool freeToPlayReward;
    std::vector<CollectionsLcdsChampionSkinDTO_t> championSkins;
    uint64_t endDate;
    bool rankedPlayEnabled;
    bool active;
    int32_t championId;
    std::vector<std::string> sources;
    bool owned;
    bool botEnabled;
    int32_t winCountRemaining;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsChampionDTO_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["freeToPlay"] = v.freeToPlay;
    j["purchased"] = v.purchased;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["championSkins"] = v.championSkins;
    j["endDate"] = v.endDate;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["active"] = v.active;
    j["championId"] = v.championId;
    j["sources"] = v.sources;
    j["owned"] = v.owned;
    j["botEnabled"] = v.botEnabled;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsChampionDTO_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.championSkins = j.at("championSkins").get<std::vector<CollectionsLcdsChampionSkinDTO_t>>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.active = j.at("active").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.owned = j.at("owned").get<bool>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
  }
  inline std::string to_string(const CollectionsLcdsChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

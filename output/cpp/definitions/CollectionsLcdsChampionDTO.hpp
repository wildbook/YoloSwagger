#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsChampionSkinDTO.hpp"
namespace leagueapi {
  struct CollectionsLcdsChampionDTO_t {
    std::vector<CollectionsLcdsChampionSkinDTO_t> championSkins;
    bool_t rankedPlayEnabled;
    int32_t_t championId;
    bool_t botEnabled;
    uint64_t_t purchaseDate;
    uint64_t_t endDate;
    std::vector<std::string> sources;
    bool_t freeToPlayReward;
    bool_t owned;
    uint64_t_t purchased;
    bool_t active;
    bool_t freeToPlay;
    int32_t_t winCountRemaining;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsChampionDTO_t& v) {
    j["championSkins"] = v.championSkins;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["championId"] = v.championId;
    j["botEnabled"] = v.botEnabled;
    j["purchaseDate"] = v.purchaseDate;
    j["endDate"] = v.endDate;
    j["sources"] = v.sources;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["purchased"] = v.purchased;
    j["active"] = v.active;
    j["freeToPlay"] = v.freeToPlay;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsChampionDTO_t& v) {
    v.championSkins = j.at("championSkins").get<std::vector<CollectionsLcdsChampionSkinDTO_t>>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.botEnabled = j.at("botEnabled").get<bool_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t_t>();
    v.endDate = j.at("endDate").get<uint64_t_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool_t>();
    v.owned = j.at("owned").get<bool_t>();
    v.purchased = j.at("purchased").get<uint64_t_t>();
    v.active = j.at("active").get<bool_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool_t>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t_t>();
  }
  inline std::string to_string(const CollectionsLcdsChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

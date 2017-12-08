#pragma once
#include <json.hpp>
#include <optional>
#include "LolStorePlayer.hpp"
#include "LolStorePageGroupingDTO.hpp"
#include "LolStoreCatalogItem.hpp"
namespace leagueapi {
  struct LolStorePageDTO_t {
    std::map<std::string, LolStorePageGroupingDTO_t> itemGroups;
    std::vector<std::string> groupOrder;
    std::vector<LolStoreCatalogItem_t> catalog;
    LolStorePlayer_t Player;
  };

  inline void to_json(nlohmann::json& j, const LolStorePageDTO_t& v) {
    j["itemGroups"] = v.itemGroups;
    j["groupOrder"] = v.groupOrder;
    j["catalog"] = v.catalog;
    j["Player"] = v.Player;
  }

  inline void from_json(const nlohmann::json& j, LolStorePageDTO_t& v) {
    v.itemGroups = j.at("itemGroups").get<std::map<std::string, LolStorePageGroupingDTO_t>>();
    v.groupOrder = j.at("groupOrder").get<std::vector<std::string>>();
    v.catalog = j.at("catalog").get<std::vector<LolStoreCatalogItem_t>>();
    v.Player = j.at("Player").get<LolStorePlayer_t>();
  }
  inline std::string to_string(const LolStorePageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

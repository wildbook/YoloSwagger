#ifndef SWAGGER_TYPES_LolStorePageDTO_HPP
#define SWAGGER_TYPES_LolStorePageDTO_HPP
#include <json.hpp>
#include "LolStorePageGroupingDTO.hpp"
#include "LolStorePlayer.hpp"
#include "LolStoreCatalogItem.hpp"
namespace test {
  // 
  struct LolStorePageDTO {
'    // 
    LolStorePlayer Player;
    // 
    std::vector<LolStoreCatalogItem> catalog;
    // 
    std::vector<std::string> groupOrder;
    // 
    std::map<std::string, LolStorePageGroupingDTO> itemGroups;
  };

  void to_json(nlohmann::json& j, const LolStorePageDTO& v) {
    j["Player"] = v.Player;
    j["catalog"] = v.catalog;
    j["groupOrder"] = v.groupOrder;
    j["itemGroups"] = v.itemGroups;
  }

  void from_json(const nlohmann::json& j, LolStorePageDTO& v) {
    v.Player = j.at("Player").get<LolStorePlayer>;
    v.catalog = j.at("catalog").get<std::vector<LolStoreCatalogItem>>;
    v.groupOrder = j.at("groupOrder").get<std::vector<std::string>>;
    v.itemGroups = j.at("itemGroups").get<std::map<std::string, LolStorePageGroupingDTO>>;
  }

}
#endif // SWAGGER_TYPES_LolStorePageDTO_HPP

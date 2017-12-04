#ifndef SWAGGER_TYPES_RedeemLootTransactionDTO_HPP
#define SWAGGER_TYPES_RedeemLootTransactionDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RedeemLootTransactionDTO {
    // 
    std::string lootName;
  };

  inline void to_json(nlohmann::json& j, const RedeemLootTransactionDTO& v) {
    j["lootName"] = v.lootName;
  }

  inline void from_json(const nlohmann::json& j, RedeemLootTransactionDTO& v) {
    v.lootName = j.at("lootName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RedeemLootTransactionDTO_HPP

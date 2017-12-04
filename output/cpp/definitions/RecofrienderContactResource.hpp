#ifndef SWAGGER_TYPES_RecofrienderContactResource_HPP
#define SWAGGER_TYPES_RecofrienderContactResource_HPP
#include <json.hpp>
#include "RecofrienderFriendState.hpp"
namespace leagueapi {
  // 
  struct RecofrienderContactResource {
    // 
    std::string name;
    // 
    std::string imageUrl;
    // 
    std::string displayState;
    // 
    std::string source;
    // 
    RecofrienderFriendState friendState;
    // 
    std::string action;
    // 
    uint64_t summonerId;
    // 
    int64_t recommendScore;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactResource& v) {
    j["name"] = v.name;
    j["imageUrl"] = v.imageUrl;
    j["displayState"] = v.displayState;
    j["source"] = v.source;
    j["friendState"] = v.friendState;
    j["action"] = v.action;
    j["summonerId"] = v.summonerId;
    j["recommendScore"] = v.recommendScore;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactResource& v) {
    v.name = j.at("name").get<std::string>;
    v.imageUrl = j.at("imageUrl").get<std::string>;
    v.displayState = j.at("displayState").get<std::string>;
    v.source = j.at("source").get<std::string>;
    v.friendState = j.at("friendState").get<RecofrienderFriendState>;
    v.action = j.at("action").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.recommendScore = j.at("recommendScore").get<int64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderContactResource_HPP

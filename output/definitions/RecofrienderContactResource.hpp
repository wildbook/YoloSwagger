#ifndef SWAGGER_TYPES_RecofrienderContactResource_HPP
#define SWAGGER_TYPES_RecofrienderContactResource_HPP
#include <json.hpp>
#include "RecofrienderFriendState.hpp"
namespace test {
  // 
  struct RecofrienderContactResource {
'    // 
    uint64_t accountId;
    // 
    std::string action;
    // 
    std::string displayState;
    // 
    RecofrienderFriendState friendState;
    // 
    std::string imageUrl;
    // 
    std::string name;
    // 
    int64_t recommendScore;
    // 
    std::string source;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const RecofrienderContactResource& v) {
    j["accountId"] = v.accountId;
    j["action"] = v.action;
    j["displayState"] = v.displayState;
    j["friendState"] = v.friendState;
    j["imageUrl"] = v.imageUrl;
    j["name"] = v.name;
    j["recommendScore"] = v.recommendScore;
    j["source"] = v.source;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, RecofrienderContactResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.action = j.at("action").get<std::string>;
    v.displayState = j.at("displayState").get<std::string>;
    v.friendState = j.at("friendState").get<RecofrienderFriendState>;
    v.imageUrl = j.at("imageUrl").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.recommendScore = j.at("recommendScore").get<int64_t>;
    v.source = j.at("source").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderContactResource_HPP

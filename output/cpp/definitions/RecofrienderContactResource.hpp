#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderFriendState.hpp"
namespace leagueapi {
  struct RecofrienderContactResource_t {
    uint64_t accountId;
    RecofrienderFriendState_t friendState;
    int64_t recommendScore;
    std::string displayState;
    uint64_t summonerId;
    std::string name;
    std::string imageUrl;
    std::string source;
    std::string action;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactResource_t& v) {
    j["accountId"] = v.accountId;
    j["friendState"] = v.friendState;
    j["recommendScore"] = v.recommendScore;
    j["displayState"] = v.displayState;
    j["summonerId"] = v.summonerId;
    j["name"] = v.name;
    j["imageUrl"] = v.imageUrl;
    j["source"] = v.source;
    j["action"] = v.action;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactResource_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.friendState = j.at("friendState").get<RecofrienderFriendState_t>();
    v.recommendScore = j.at("recommendScore").get<int64_t>();
    v.displayState = j.at("displayState").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.imageUrl = j.at("imageUrl").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.action = j.at("action").get<std::string>();
  }
  inline std::string to_string(const RecofrienderContactResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}

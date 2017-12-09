#pragma once
#include <json.hpp>
#include <optional>
#include "TicketOfferDTO.hpp"
#include "PendingRosterInviteeDTO.hpp"
#include "FailedInvite.hpp"
#include "PendingRosterMemberDTO.hpp"
namespace leagueapi {
  struct PendingRosterDTO_t {
    std::string invitationId;
    std::vector<PendingRosterInviteeDTO_t> invitees;
    int64_t tournamentId;
    int32_t logoColor;
    std::string shortName;
    uint64_t captainId;
    std::vector<FailedInvite_t> inviteFaileds;
    int32_t logo;
    std::vector<TicketOfferDTO_t> ticketOffers;
    std::vector<PendingRosterMemberDTO_t> members;
    int32_t tier;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterDTO_t& v) {
    j["invitationId"] = v.invitationId;
    j["invitees"] = v.invitees;
    j["tournamentId"] = v.tournamentId;
    j["logoColor"] = v.logoColor;
    j["shortName"] = v.shortName;
    j["captainId"] = v.captainId;
    j["inviteFaileds"] = v.inviteFaileds;
    j["logo"] = v.logo;
    j["ticketOffers"] = v.ticketOffers;
    j["members"] = v.members;
    j["tier"] = v.tier;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterDTO_t& v) {
    v.invitationId = j.at("invitationId").get<std::string>();
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite_t>>();
    v.logo = j.at("logo").get<int32_t>();
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO_t>>();
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO_t>>();
    v.tier = j.at("tier").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const PendingRosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
